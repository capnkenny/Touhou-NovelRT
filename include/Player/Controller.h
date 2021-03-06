// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef TOUHOUNOVELRT_PLAYER_CONTROLLER_H
#define TOUHOUNOVELRT_PLAYER_CONTROLLER_H

#ifndef TOUHOUNOVELRT_H
#error Please do not include this directly. Use the centralised header (TouhouNovelRT.h) instead!
#endif

namespace TouhouNovelRT::Player {
  class Controller {
  public:
    virtual void someTestAbstractMethodThatWontLiveBeyondThisPr() = 0;
  };
}

#endif //!TOUHOUNOVELRT_PLAYER_CONTROLLER_H
