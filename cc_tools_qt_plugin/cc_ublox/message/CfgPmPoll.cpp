// Generated by commsdsl2tools_qt v6.3.2

#include "CfgPmPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPmPoll.h"

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

class CfgPmPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPmPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPmPollImpl
    >
{
public:
    CfgPmPollImpl() = default;
    CfgPmPollImpl(const CfgPmPollImpl&) = delete;
    CfgPmPollImpl(CfgPmPollImpl&&) = delete;
    virtual ~CfgPmPollImpl() = default;
    CfgPmPollImpl& operator=(const CfgPmPollImpl&) = default;
    CfgPmPollImpl& operator=(CfgPmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPmPoll::CfgPmPoll() : m_pImpl(new CfgPmPollImpl) {}
CfgPmPoll::~CfgPmPoll() = default;

CfgPmPoll& CfgPmPoll::operator=(const CfgPmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPmPoll& CfgPmPoll::operator=(CfgPmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPmPoll::MsgIdParamType CfgPmPoll::doGetId()
{
    return ::cc_ublox::message::CfgPmPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPmPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPmPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPmPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPmPoll::MsgIdParamType CfgPmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
