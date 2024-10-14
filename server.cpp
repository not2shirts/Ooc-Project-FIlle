 // If you want to use HTTPS
#include "httplib.h"

int main() {
    // Create a server object
    httplib::Server svr;

    // Define a route for GET requests at the root URL ("/")
    svr.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Hello, cpp-httplib!", "text/plain");
    });

    // Define a route that takes a parameter in the URL ("/hi/<name>")
   /* svr.Get("/hi/(.*)", [](const httplib::Request& req, httplib::Response& res) {
        auto name = req.matches[1]; // Extract the name from the URL
        res.set_content("Hello, " + name + "!", "text/plain");
    });
*/
    // Start the server on port 8080
    svr.listen("0.0.0.0", 8085);

    return 0;
}
