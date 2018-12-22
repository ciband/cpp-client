/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef TWO_DELEGATES_H
#define TWO_DELEGATES_H

#include "api/api_base.h"
#include "api/two/two_paths.h"

namespace Ark {
namespace Client {
namespace API {
namespace TWO {

class IDelegates : public ApiBase
{
protected:
  IDelegates(IHTTP& http) : ApiBase(http) { }

public:
  virtual std::string get(const char *const identifier) = 0;
  virtual std::string all(int limit = 5, int page = 1) = 0;
  virtual std::string blocks(const char *const identifier, int limit = 5, int page = 1) = 0;
  virtual std::string voters(const char *const identifier, int limit = 5, int page = 1) = 0;
};

class Delegates : public IDelegates
{
public:
  Delegates(IHTTP& http) : IDelegates(http) { }

  std::string get(const char *const identifier) override;
  std::string all(int limit = 5, int page = 1) override;
  std::string blocks(const char *const identifier, int limit = 5, int page = 1) override;
  std::string voters(const char *const identifier, int limit = 5, int page = 1) override;
};

};
};
};
};

#endif
