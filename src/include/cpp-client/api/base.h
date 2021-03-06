/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef BASE_H
#define BASE_H

#include "http/http.h"

namespace Ark {
namespace Client {
namespace API {
/**
 * Ark::Client::API::Base 
 **/
class Base {
protected:
  HTTP& http_;

  Base(HTTP& http) : http_(http) { }
};
/**/
};
};
};

#endif
