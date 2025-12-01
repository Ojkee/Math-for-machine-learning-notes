```python
class ThreadingHTTPServer(socketserver.ThreadingMixIn, HTTPServer):
	daemon_threads = True
```

```python
class ThreadingMixIn:
	"""Mixin class to handle each request in a new thread."""

	# 8 lines omitted in book listing
	def process_request_thread(self, request, client_address):
		... # 6 lines omitted in book listing
		
	def process_request(self, request, client_address):
		... # 8 lines omitted in book listing
	
	def server_close(self):
		super().server_close()
		self._threads.join()
```