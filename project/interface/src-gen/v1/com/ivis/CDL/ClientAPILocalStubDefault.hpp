/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CDL_Client_API_Local_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_CDL_Client_API_Local_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/com/ivis/CDL/ClientAPILocalStub.hpp>
#include <sstream>

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

/**
 * Provides a default implementation for ClientAPILocalStubRemoteEvent and
 * ClientAPILocalStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT ClientAPILocalStubDefault
    : public virtual ClientAPILocalStub {
public:
    COMMONAPI_EXPORT ClientAPILocalStubDefault();

    COMMONAPI_EXPORT ClientAPILocalStubRemoteEvent* initStubAdapter(const std::shared_ptr< ClientAPILocalStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    COMMONAPI_EXPORT virtual void storeData(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _domain, std::string _subDomain, std::string _id, ClientAPILocalTypes::CDLData _data, storeDataReply_t _reply);

    COMMONAPI_EXPORT virtual void fireNotifyDataEvent(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ::v1::com::ivis::CDL::ClientAPILocalTypes::CDLData &_data);

    
protected:
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual ClientAPILocalStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(ClientAPILocalStubDefault *_defaultStub);


    private:
        ClientAPILocalStubDefault *defaultStub_;
    };
private:
    ClientAPILocalStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CDL_Client_API_Local_STUB_DEFAULT
