```
https://testdriven.io/blog/dockerizing-django-with-postgres-gunicorn-and-nginx/
```


## Migracje
#### Show migrations
```bash
docker compose exec [service name] python manage.py showmigrations [migrations name]
```

### Enter bash in docker
```
docker compose exec [service name] bash
```

#### Make new migrations
```bash
(in docker bash)
python manage.py makemigrations --empty [migrations name]
```
```
docker compose exec [service name] python manage.py migrate [migrations name]
```

## Run commands
```bash
docker compose run --rm [service name] python manage.py [django command]
```

## PSQL
```
docker compose exec pg_db psql --username=admin --dbname=articles_db
```

```
\l
```

```
\c articles_db
```

```
\q
```

