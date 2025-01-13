// Generated by commsdsl2tools_qt v7.0.0

#include "CfgPrtPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPrtPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPrtPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPrtPoll,
        CfgPrtPollImpl
    >
{
public:
    CfgPrtPollImpl() = default;
    CfgPrtPollImpl(const CfgPrtPollImpl&) = default;
    CfgPrtPollImpl(CfgPrtPollImpl&&) = default;
    virtual ~CfgPrtPollImpl() = default;
    CfgPrtPollImpl& operator=(const CfgPrtPollImpl&) = default;
    CfgPrtPollImpl& operator=(CfgPrtPollImpl&&) = default;
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

const char* CfgPrtPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPrtPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPrtPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPrtPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPrtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPrtPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPrtPoll::DataSeq CfgPrtPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPrtPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPrtPoll::Ptr CfgPrtPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPrtPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPrtPoll(std::move(impl)));
}

void CfgPrtPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPrtPoll::DataSeq CfgPrtPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPrtPoll::FieldsList CfgPrtPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPrtPoll::FieldsList CfgPrtPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPrtPoll::CfgPrtPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
