// Generated by commsdsl2tools_qt v6.3.4

#include "CfgPrtPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPrtPoll.h"

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

class CfgPrtPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPrtPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPrtPollImpl
    >
{
public:
    CfgPrtPollImpl() = default;
    CfgPrtPollImpl(const CfgPrtPollImpl&) = delete;
    CfgPrtPollImpl(CfgPrtPollImpl&&) = delete;
    virtual ~CfgPrtPollImpl() = default;
    CfgPrtPollImpl& operator=(const CfgPrtPollImpl&) = default;
    CfgPrtPollImpl& operator=(CfgPrtPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtPoll::CfgPrtPoll() : m_pImpl(new CfgPrtPollImpl) {}
CfgPrtPoll::~CfgPrtPoll() = default;

CfgPrtPoll& CfgPrtPoll::operator=(const CfgPrtPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtPoll& CfgPrtPoll::operator=(CfgPrtPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPrtPoll::MsgIdParamType CfgPrtPoll::doGetId()
{
    return ::cc_ublox::message::CfgPrtPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPrtPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtPoll::MsgIdParamType CfgPrtPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
