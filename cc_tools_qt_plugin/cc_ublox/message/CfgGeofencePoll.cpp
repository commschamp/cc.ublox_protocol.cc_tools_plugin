// Generated by commsdsl2tools_qt v6.3.0

#include "CfgGeofencePoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgGeofencePoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgGeofencePollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgGeofencePoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgGeofencePollImpl
    >
{
public:
    CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl(const CfgGeofencePollImpl&) = delete;
    CfgGeofencePollImpl(CfgGeofencePollImpl&&) = delete;
    virtual ~CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl& operator=(const CfgGeofencePollImpl&) = default;
    CfgGeofencePollImpl& operator=(CfgGeofencePollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgGeofencePoll::CfgGeofencePoll() : m_pImpl(new CfgGeofencePollImpl) {}
CfgGeofencePoll::~CfgGeofencePoll() = default;

CfgGeofencePoll& CfgGeofencePoll::operator=(const CfgGeofencePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGeofencePoll& CfgGeofencePoll::operator=(CfgGeofencePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgGeofencePoll::MsgIdParamType CfgGeofencePoll::doGetId()
{
    return ::cc_ublox::message::CfgGeofencePoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgGeofencePoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgGeofencePoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgGeofencePoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgGeofencePoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGeofencePoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgGeofencePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgGeofencePoll::MsgIdParamType CfgGeofencePoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgGeofencePoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgGeofencePoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgGeofencePoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgGeofencePoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgGeofencePoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
