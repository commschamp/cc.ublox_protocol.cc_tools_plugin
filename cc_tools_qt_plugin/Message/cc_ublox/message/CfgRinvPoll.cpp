// Generated by commsdsl2tools_qt v7.0.3

#include "CfgRinvPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgRinvPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgRinvPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgRinvPoll,
        CfgRinvPollImpl
    >
{
public:
    CfgRinvPollImpl() = default;
    CfgRinvPollImpl(const CfgRinvPollImpl&) = default;
    CfgRinvPollImpl(CfgRinvPollImpl&&) = default;
    virtual ~CfgRinvPollImpl() = default;
    CfgRinvPollImpl& operator=(const CfgRinvPollImpl&) = default;
    CfgRinvPollImpl& operator=(CfgRinvPollImpl&&) = default;
};

CfgRinvPoll::CfgRinvPoll() : m_pImpl(new CfgRinvPollImpl) {}
CfgRinvPoll::~CfgRinvPoll() = default;

CfgRinvPoll& CfgRinvPoll::operator=(const CfgRinvPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRinvPoll& CfgRinvPoll::operator=(CfgRinvPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRinvPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgRinvPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgRinvPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgRinvPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgRinvPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRinvPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgRinvPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgRinvPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgRinvPoll::DataSeq CfgRinvPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgRinvPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgRinvPoll::Ptr CfgRinvPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgRinvPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgRinvPoll(std::move(impl)));
}

void CfgRinvPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgRinvPoll::DataSeq CfgRinvPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgRinvPoll::FieldsList CfgRinvPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgRinvPoll::FieldsList CfgRinvPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgRinvPoll::CfgRinvPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
