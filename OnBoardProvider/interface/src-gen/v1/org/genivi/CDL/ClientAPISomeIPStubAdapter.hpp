/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.5.v201601121433.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * description: CDL Client APIs for providing data to on-board components
 */
#ifndef V1_ORG_GENIVI_CDL_CLIENT_API_SOMEIP_STUB_ADAPTER_HPP_
#define V1_ORG_GENIVI_CDL_CLIENT_API_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/org/genivi/CDL/ClientAPIStub.hpp>
#include <v1/org/genivi/CDL/ClientAPITypesSomeIPDeployment.hpp>        

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Config.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace CDL {

typedef CommonAPI::SomeIP::StubAdapterHelper<ClientAPIStub> ClientAPISomeIPStubAdapterHelper;

class ClientAPISomeIPStubAdapterInternal
    : public virtual ClientAPIStubAdapter,
      public ClientAPISomeIPStubAdapterHelper
{
public:
    ClientAPISomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub);

    ~ClientAPISomeIPStubAdapterInternal();


    /**
     * description: notify data to client
     */
    void fireNotifyDataSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const std::string &_signalName, const ::v1::org::genivi::CDL::ClientAPITypes::Types &_type, const std::string &_unit, const ::v1::org::genivi::CDL::ClientAPITypes::CDLValue &_value, const uint64_t &_timeStamp);
    void sendNotifyDataSelective(const std::string &_signalName, const ::v1::org::genivi::CDL::ClientAPITypes::Types &_type, const std::string &_unit, const ::v1::org::genivi::CDL::ClientAPITypes::CDLValue &_value, const uint64_t &_timeStamp, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
    void subscribeFornotifyDataSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success);
    void unsubscribeFromnotifyDataSelective(const std::shared_ptr<CommonAPI::ClientId> clientId);
    std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForNotifyDataSelective();


    const ClientAPISomeIPStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::SomeIP::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();


    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::org::genivi::CDL::ClientAPIStub,
        CommonAPI::Version
    > getClientAPIInterfaceVersionStubDispatcher;


    /**
     * description: register and authenticate client
     */
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::org::genivi::CDL::ClientAPIStub,
        std::tuple<std::string>,
        std::tuple<ClientAPITypes::Handle, ClientAPITypes::ResultCode>,
        std::tuple<CommonAPI::SomeIP::StringDeployment>,
        std::tuple<CommonAPI::EmptyDeployment, CommonAPI::SomeIP::EnumerationDeployment>
    > registerClientStubDispatcher;
    /**
     * description: set id list for listen. only specified data will notified to client
     */
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::org::genivi::CDL::ClientAPIStub,
        std::tuple<ClientAPITypes::Handle, std::vector<std::string>, ClientAPITypes::NotifyType>,
        std::tuple<ClientAPITypes::ResultCode>,
        std::tuple<CommonAPI::EmptyDeployment, CommonAPI::SomeIP::ArrayDeployment<CommonAPI::SomeIP::StringDeployment>, CommonAPI::SomeIP::EnumerationDeployment>,
        std::tuple<CommonAPI::SomeIP::EnumerationDeployment>
    > setListenDataStubDispatcher;
    /**
     * description: get single data instantly
     */
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::org::genivi::CDL::ClientAPIStub,
        std::tuple<ClientAPITypes::Handle, std::string>,
        std::tuple<ClientAPITypes::ResultCode>,
        std::tuple<CommonAPI::EmptyDeployment, CommonAPI::SomeIP::StringDeployment>,
        std::tuple<CommonAPI::SomeIP::EnumerationDeployment>
    > getDataStubDispatcher;

private:
    std::mutex NotifyDataSelectiveEventMutex_;
    bool NotifyDataSelectiveEventHandler(CommonAPI::SomeIP::client_id_t _client, bool subscribe);
    ClientAPISomeIPStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::SomeIP::StubAttributeTable stubAttributeTable_;
};

class ClientAPISomeIPStubAdapter
    : public ClientAPISomeIPStubAdapterInternal,
      public std::enable_shared_from_this<ClientAPISomeIPStubAdapter> {
public:
    ClientAPISomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub) 
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          ClientAPISomeIPStubAdapterInternal(_address, _connection, _stub) {
    }
};

} // namespace CDL
} // namespace genivi
} // namespace org
} // namespace v1

#endif // V1_ORG_GENIVI_CDL_Client_API_SOMEIP_STUB_ADAPTER_HPP_
