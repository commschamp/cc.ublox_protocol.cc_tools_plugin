// Generated by commsdsl2tools_qt v7.0.2

#include "CfgGeofencePoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgGeofencePoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgGeofencePollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgGeofencePoll,
        CfgGeofencePollImpl
    >
{
public:
    CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl(const CfgGeofencePollImpl&) = default;
    CfgGeofencePollImpl(CfgGeofencePollImpl&&) = default;
    virtual ~CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl& operator=(const CfgGeofencePollImpl&) = default;
    CfgGeofencePollImpl& operator=(CfgGeofencePollImpl&&) = default;
};

CfgGeofencePoll::CfgGeofencePoll() : m_pImpl(new CfgGeofencePollImpl) {}
CfgGeofencePoll::~CfgGeofencePoll() = default;

CfgGeofencePoll& CfgGeofencePoll::operator=(const CfgGeofencePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGeofencePoll& CfgGeofencePoll::operator=(CfgGeofencePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgGeofencePoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgGeofencePoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgGeofencePoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgGeofencePoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgGeofencePoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGeofencePoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgGeofencePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgGeofencePoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgGeofencePoll::DataSeq CfgGeofencePoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgGeofencePoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgGeofencePoll::Ptr CfgGeofencePoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgGeofencePollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgGeofencePoll(std::move(impl)));
}

void CfgGeofencePoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgGeofencePoll::DataSeq CfgGeofencePoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgGeofencePoll::FieldsList CfgGeofencePoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgGeofencePoll::FieldsList CfgGeofencePoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgGeofencePoll::CfgGeofencePoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
