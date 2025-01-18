// Generated by commsdsl2tools_qt v7.0.2

#include "CfgDatPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgDatPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgDatPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgDatPoll,
        CfgDatPollImpl
    >
{
public:
    CfgDatPollImpl() = default;
    CfgDatPollImpl(const CfgDatPollImpl&) = default;
    CfgDatPollImpl(CfgDatPollImpl&&) = default;
    virtual ~CfgDatPollImpl() = default;
    CfgDatPollImpl& operator=(const CfgDatPollImpl&) = default;
    CfgDatPollImpl& operator=(CfgDatPollImpl&&) = default;
};

CfgDatPoll::CfgDatPoll() : m_pImpl(new CfgDatPollImpl) {}
CfgDatPoll::~CfgDatPoll() = default;

CfgDatPoll& CfgDatPoll::operator=(const CfgDatPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatPoll& CfgDatPoll::operator=(CfgDatPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDatPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgDatPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgDatPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgDatPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgDatPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgDatPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgDatPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgDatPoll::DataSeq CfgDatPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgDatPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgDatPoll::Ptr CfgDatPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgDatPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgDatPoll(std::move(impl)));
}

void CfgDatPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgDatPoll::DataSeq CfgDatPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgDatPoll::FieldsList CfgDatPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgDatPoll::FieldsList CfgDatPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgDatPoll::CfgDatPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
