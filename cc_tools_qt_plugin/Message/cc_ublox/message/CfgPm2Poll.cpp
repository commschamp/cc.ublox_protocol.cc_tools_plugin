// Generated by commsdsl2tools_qt v7.0.0

#include "CfgPm2Poll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPm2Poll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPm2PollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPm2Poll,
        CfgPm2PollImpl
    >
{
public:
    CfgPm2PollImpl() = default;
    CfgPm2PollImpl(const CfgPm2PollImpl&) = default;
    CfgPm2PollImpl(CfgPm2PollImpl&&) = default;
    virtual ~CfgPm2PollImpl() = default;
    CfgPm2PollImpl& operator=(const CfgPm2PollImpl&) = default;
    CfgPm2PollImpl& operator=(CfgPm2PollImpl&&) = default;
};

CfgPm2Poll::CfgPm2Poll() : m_pImpl(new CfgPm2PollImpl) {}
CfgPm2Poll::~CfgPm2Poll() = default;

CfgPm2Poll& CfgPm2Poll::operator=(const CfgPm2Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPm2Poll& CfgPm2Poll::operator=(CfgPm2Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPm2Poll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPm2Poll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPm2Poll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPm2Poll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPm2Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPm2Poll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPm2Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPm2Poll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPm2Poll::DataSeq CfgPm2Poll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPm2Poll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPm2Poll::Ptr CfgPm2Poll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPm2PollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPm2Poll(std::move(impl)));
}

void CfgPm2Poll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPm2Poll::DataSeq CfgPm2Poll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPm2Poll::FieldsList CfgPm2Poll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPm2Poll::FieldsList CfgPm2Poll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPm2Poll::CfgPm2Poll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
