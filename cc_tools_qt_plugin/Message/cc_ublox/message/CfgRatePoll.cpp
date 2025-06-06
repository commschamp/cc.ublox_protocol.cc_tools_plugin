// Generated by commsdsl2tools_qt v7.1.0

#include "CfgRatePoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgRatePoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgRatePollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgRatePoll,
        CfgRatePollImpl
    >
{
public:
    CfgRatePollImpl() = default;
    CfgRatePollImpl(const CfgRatePollImpl&) = default;
    CfgRatePollImpl(CfgRatePollImpl&&) = default;
    virtual ~CfgRatePollImpl() = default;
    CfgRatePollImpl& operator=(const CfgRatePollImpl&) = default;
    CfgRatePollImpl& operator=(CfgRatePollImpl&&) = default;
};

CfgRatePoll::CfgRatePoll() : m_pImpl(new CfgRatePollImpl) {}
CfgRatePoll::~CfgRatePoll() = default;

CfgRatePoll& CfgRatePoll::operator=(const CfgRatePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRatePoll& CfgRatePoll::operator=(CfgRatePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRatePoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgRatePoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgRatePoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgRatePoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgRatePoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRatePoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgRatePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgRatePoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgRatePoll::DataSeq CfgRatePoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgRatePoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgRatePoll::Ptr CfgRatePoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgRatePollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgRatePoll(std::move(impl)));
}

void CfgRatePoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgRatePoll::DataSeq CfgRatePoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgRatePoll::FieldsList CfgRatePoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgRatePoll::FieldsList CfgRatePoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgRatePoll::CfgRatePoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
