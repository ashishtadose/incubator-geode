/*=========================================================================
 * Copyright (c) 2002-2014 Pivotal Software, Inc. All Rights Reserved.
 * This product is protected by U.S. and international copyright
 * and intellectual property laws. Pivotal products are covered by
 * more patents listed at http://www.pivotal.io/patents.
 *=========================================================================
 */
#ifdef CSTX_COMMENTED
#pragma once

#include "gf_defs.hpp"

#include "TransactionEventM.hpp"

namespace GemStone
{
  namespace GemFire
  {
    namespace Cache
    {
      public interface class ITransactionWriter
      {
      public:

        void BeforeCommit(GemStone::GemFire::Cache::TransactionEvent^ te);
      };

    }
  }
}
#endif