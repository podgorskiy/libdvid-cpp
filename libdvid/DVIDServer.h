#ifndef DVIDSERVER_H
#define DVIDSERVER_H

#include "DVIDConnection.h" 
#include <string>

namespace libdvid {

class DVIDServer {
  public:
    DVIDServer(std::string addr_);
    
    std::string create_new_repo(std::string alias, std::string description);
    
    std::string get_uri_root() const
    {
        return connection.get_uri_root();
    }
  private:
    DVIDConnection connection;
};

}
#endif
