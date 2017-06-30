/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * description: CDL Client APIs for providing data to on-board components
 */
#ifndef V1_ORG_GENIVI_CDL_CLIENT_API_HPP_
#define V1_ORG_GENIVI_CDL_CLIENT_API_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace CDL {

class ClientAPI {
public:
    virtual ~ClientAPI() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* ClientAPI::getInterface() {
    return ("org.genivi.CDL.ClientAPI");
}

CommonAPI::Version ClientAPI::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace CDL
} // namespace genivi
} // namespace org
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_GENIVI_CDL_CLIENT_API_HPP_
