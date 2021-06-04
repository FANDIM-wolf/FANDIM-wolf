from http.server import HTTPServer, BaseHTTPRequestHandler
	
class server_handler(BaseHTTPRequestHandler):
	def do_GET(self):
		self.send_response(200)
		self.send_header('content-type','text/html')
		self.end_headers()
		self.wfile.write('<html><head><title>Server</title></head><body><p>Hello</p></body> </html>'.encode())
		

def main():
	PORT=8000
	server = HTTPServer(('',PORT),server_handler)
	print('Rudic 1.0')
	print('Server running on port %s' % PORT)
	server.serve_forever()


main()