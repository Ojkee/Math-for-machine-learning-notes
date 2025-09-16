Network design application.

### Client
Host that connects or send request to the server.

### Server 
The server provides some type of service to clients, such as access to files on the server host.

#### Classes
- **Iterative**:
1.  Wait for a client request to arrive.
2. Process the client request.
3. Send the response back to the client that sent the request.
4. Go back to step 1.

- **Concurrent**:
1. Wait for a client request to arrive.
2. Start a new server instance to handle this client's request. This may involve creating new process, task, or thread, depending on what the underlying operating system supports. This new server handles one client 's entire request. When the requested task is complete, the new server terminates. Meanwhile, the original server instance continues to 3. 
3. Go back to step 1.

