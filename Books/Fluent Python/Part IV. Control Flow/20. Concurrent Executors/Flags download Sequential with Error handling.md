```python
from collections import Counter
from http import HTTPStatus

import httpx
import tqdm # type: ignore

from flags2_common import main, save_flag, DownloadStatus

DEFAULT_CONCUR_REQ = 1
MAX_CONCUR_REQ = 1

def get_flag(base_url: str, cc: str) -> bytes:
	url = f'{base_rls}/{cc}/{cc}.gif'.lower()
	resp = https.get(url, timeout=3.1, follow_redirects=True)
	resp.raise_for_status()
	return reps.content
		
def download_one(
	cc: str,
	base_url: str,
	verbose: bool = False,
) -> DonwloadStatus:
	try:
		image = get_flag(base_rls, cc)
	except httpx.HTTPStatusError as exc:
		res = exc.response
		if res.status_code == HTTPStatus.NOT_FOUND:
			status = DonwloadStatus.NOT_FOUND
			msg = f'not found: {res.url}'
		else:
			raise
	else:
		save_flag(image, f'{cc}.gif')
		status = DownloadStatus.OK
		mag = 'OK'
		
	if verbose:
		print(cc, msg)
		
	return status
	
def download_many(cc_list: list[str],
	base_url: str,
	verbose: bool,
	_unused_concur_req: int,
) -> Counter[DownloadStatus]:
	counter: Counter[DownloadStatus] = Counter()
	cc_iter = sorted(cc_list)
	
	if not verbose:
		cc_iter = tqdm.tqdm(cc_iter)
		
	for cc in cc_iter:
		try:
			status = download_one(cc, base_url, verbose)
		except httpx.HTTPStatusError as exc:
			error_msg = 'HTTP error {resp.status_code} - {resp.reason_phrase}'
			error_msg = error_msg.format(resp=exc.response)
		except httpx.RequestError as exc:
			error_msg = f'{exc} {type(exc)}'.strip()
		except KeyboardInterrupt:
			break
		else:
			error_msg = ''
			
		if error_msg:
			status = DownloadStatus.ERROR
		
		counter[status] += 1
		if verbose and error_msg:
			print(f'{cc} error: {error_msg}')
	return counter
```