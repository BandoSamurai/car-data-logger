/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * description: CDL Client APIs for providing data to on-board components
 */
#ifndef V1_ORG_GENIVI_CDL_Client_API_DBUS_PROXY_HPP_
#define V1_ORG_GENIVI_CDL_Client_API_DBUS_PROXY_HPP_

#include <v1/org/genivi/CDL/ClientAPIProxyBase.hpp>
#include "v1/org/genivi/CDL/ClientAPIDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/DBus/DBusSelectiveEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace org {
namespace genivi {
namespace CDL {

class ClientAPIDBusProxy
    : virtual public ClientAPIProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ClientAPIDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ClientAPIDBusProxy() { }


    virtual NotifyDataSelectiveEvent& getNotifyDataSelectiveEvent();

    /**
     * description: register and authenticate client
     */
    virtual void registerClient(const std::string &_key, CommonAPI::CallStatus &_internalCallStatus, ClientAPITypes::Handle &_handle, ClientAPITypes::ResultCode &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> registerClientAsync(const std::string &_key, RegisterClientAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: set id list for listen. only specified data will notified to client
     */
    virtual void setListenData(const ClientAPITypes::Handle &_handle, const std::vector<std::string> &_signalNameList, const ClientAPITypes::NotifyType &_type, CommonAPI::CallStatus &_internalCallStatus, ClientAPITypes::ResultCode &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setListenDataAsync(const ClientAPITypes::Handle &_handle, const std::vector<std::string> &_signalNameList, const ClientAPITypes::NotifyType &_type, SetListenDataAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: get single data instantly
     */
    virtual void getData(const ClientAPITypes::Handle &_handle, const std::string &_signalName, CommonAPI::CallStatus &_internalCallStatus, ClientAPITypes::ResultCode &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getDataAsync(const ClientAPITypes::Handle &_handle, const std::string &_signalName, GetDataAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusSelectiveEvent<NotifyDataSelectiveEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<::v1::org::genivi::CDL::ClientAPITypes::Types, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<::v1::org::genivi::CDL::ClientAPITypes::CDLValue, ClientAPITypes_::CDLValueDeployment_t>, CommonAPI::Deployable<uint64_t, CommonAPI::EmptyDeployment>> notifyDataSelective_;

};

} // namespace CDL
} // namespace genivi
} // namespace org
} // namespace v1

#endif // V1_ORG_GENIVI_CDL_Client_API_DBUS_PROXY_HPP_

