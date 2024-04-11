// Generated by commsdsl2tools_qt v6.3.2

#include "CfgFxnPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgFxnPoll.h"

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

class CfgFxnPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgFxnPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgFxnPollImpl
    >
{
public:
    CfgFxnPollImpl() = default;
    CfgFxnPollImpl(const CfgFxnPollImpl&) = delete;
    CfgFxnPollImpl(CfgFxnPollImpl&&) = delete;
    virtual ~CfgFxnPollImpl() = default;
    CfgFxnPollImpl& operator=(const CfgFxnPollImpl&) = default;
    CfgFxnPollImpl& operator=(CfgFxnPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgFxnPoll::CfgFxnPoll() : m_pImpl(new CfgFxnPollImpl) {}
CfgFxnPoll::~CfgFxnPoll() = default;

CfgFxnPoll& CfgFxnPoll::operator=(const CfgFxnPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgFxnPoll& CfgFxnPoll::operator=(CfgFxnPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgFxnPoll::MsgIdParamType CfgFxnPoll::doGetId()
{
    return ::cc_ublox::message::CfgFxnPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgFxnPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgFxnPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgFxnPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgFxnPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgFxnPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgFxnPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgFxnPoll::MsgIdParamType CfgFxnPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgFxnPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgFxnPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgFxnPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgFxnPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgFxnPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
