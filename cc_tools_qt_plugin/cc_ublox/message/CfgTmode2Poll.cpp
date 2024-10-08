// Generated by commsdsl2tools_qt v6.3.4

#include "CfgTmode2Poll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgTmode2Poll.h"

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

class CfgTmode2PollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgTmode2Poll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgTmode2PollImpl
    >
{
public:
    CfgTmode2PollImpl() = default;
    CfgTmode2PollImpl(const CfgTmode2PollImpl&) = delete;
    CfgTmode2PollImpl(CfgTmode2PollImpl&&) = delete;
    virtual ~CfgTmode2PollImpl() = default;
    CfgTmode2PollImpl& operator=(const CfgTmode2PollImpl&) = default;
    CfgTmode2PollImpl& operator=(CfgTmode2PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode2Poll::CfgTmode2Poll() : m_pImpl(new CfgTmode2PollImpl) {}
CfgTmode2Poll::~CfgTmode2Poll() = default;

CfgTmode2Poll& CfgTmode2Poll::operator=(const CfgTmode2Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode2Poll& CfgTmode2Poll::operator=(CfgTmode2Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgTmode2Poll::MsgIdParamType CfgTmode2Poll::doGetId()
{
    return ::cc_ublox::message::CfgTmode2Poll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgTmode2Poll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode2Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode2Poll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode2Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode2Poll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode2Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode2Poll::MsgIdParamType CfgTmode2Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode2Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode2Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode2Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode2Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode2Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
