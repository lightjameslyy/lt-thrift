import os
import BaseHTTPServer
import CGIHTTPServer

class Handler(CGIHTTPServer.CGIHTTPRequestHandler):
    cgi_directories = ['/']

print "Starting server on port 8765..."

BaseHTTPServer.HTTPServer(('', 8765), Handler).serve_forever()
