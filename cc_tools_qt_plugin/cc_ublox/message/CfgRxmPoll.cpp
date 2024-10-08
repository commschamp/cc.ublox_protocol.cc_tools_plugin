// Generated by commsdsl2tools_qt v6.3.4

#include "CfgRxmPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgRxmPoll.h"

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

class CfgRxmPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgRxmPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgRxmPollImpl
    >
{
public:
    CfgRxmPollImpl() = default;
    CfgRxmPollImpl(const CfgRxmPollImpl&) = delete;
    CfgRxmPollImpl(CfgRxmPollImpl&&) = delete;
    virtual ~CfgRxmPollImpl() = default;
    CfgRxmPollImpl& operator=(const CfgRxmPollImpl&) = default;
    CfgRxmPollImpl& operator=(CfgRxmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRxmPoll::CfgRxmPoll() : m_pImpl(new CfgRxmPollImpl) {}
CfgRxmPoll::~CfgRxmPoll() = default;

CfgRxmPoll& CfgRxmPoll::operator=(const CfgRxmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRxmPoll& CfgRxmPoll::operator=(CfgRxmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgRxmPoll::MsgIdParamType CfgRxmPoll::doGetId()
{
    return ::cc_ublox::message::CfgRxmPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgRxmPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRxmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRxmPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRxmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRxmPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRxmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRxmPoll::MsgIdParamType CfgRxmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRxmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRxmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRxmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRxmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRxmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
