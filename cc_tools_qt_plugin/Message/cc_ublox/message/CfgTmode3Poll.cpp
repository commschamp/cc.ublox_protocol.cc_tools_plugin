// Generated by commsdsl2tools_qt v7.0.3

#include "CfgTmode3Poll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgTmode3Poll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgTmode3PollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgTmode3Poll,
        CfgTmode3PollImpl
    >
{
public:
    CfgTmode3PollImpl() = default;
    CfgTmode3PollImpl(const CfgTmode3PollImpl&) = default;
    CfgTmode3PollImpl(CfgTmode3PollImpl&&) = default;
    virtual ~CfgTmode3PollImpl() = default;
    CfgTmode3PollImpl& operator=(const CfgTmode3PollImpl&) = default;
    CfgTmode3PollImpl& operator=(CfgTmode3PollImpl&&) = default;
};

CfgTmode3Poll::CfgTmode3Poll() : m_pImpl(new CfgTmode3PollImpl) {}
CfgTmode3Poll::~CfgTmode3Poll() = default;

CfgTmode3Poll& CfgTmode3Poll::operator=(const CfgTmode3Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode3Poll& CfgTmode3Poll::operator=(CfgTmode3Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTmode3Poll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgTmode3Poll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgTmode3Poll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgTmode3Poll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgTmode3Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode3Poll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode3Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgTmode3Poll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgTmode3Poll::DataSeq CfgTmode3Poll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgTmode3Poll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgTmode3Poll::Ptr CfgTmode3Poll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgTmode3PollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgTmode3Poll(std::move(impl)));
}

void CfgTmode3Poll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgTmode3Poll::DataSeq CfgTmode3Poll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgTmode3Poll::FieldsList CfgTmode3Poll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgTmode3Poll::FieldsList CfgTmode3Poll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgTmode3Poll::CfgTmode3Poll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
