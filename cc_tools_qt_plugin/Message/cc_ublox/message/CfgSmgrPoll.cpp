// Generated by commsdsl2tools_qt v7.0.2

#include "CfgSmgrPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgSmgrPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgSmgrPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgSmgrPoll,
        CfgSmgrPollImpl
    >
{
public:
    CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl(const CfgSmgrPollImpl&) = default;
    CfgSmgrPollImpl(CfgSmgrPollImpl&&) = default;
    virtual ~CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl& operator=(const CfgSmgrPollImpl&) = default;
    CfgSmgrPollImpl& operator=(CfgSmgrPollImpl&&) = default;
};

CfgSmgrPoll::CfgSmgrPoll() : m_pImpl(new CfgSmgrPollImpl) {}
CfgSmgrPoll::~CfgSmgrPoll() = default;

CfgSmgrPoll& CfgSmgrPoll::operator=(const CfgSmgrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSmgrPoll& CfgSmgrPoll::operator=(CfgSmgrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgSmgrPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgSmgrPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgSmgrPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgSmgrPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgSmgrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSmgrPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgSmgrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgSmgrPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgSmgrPoll::DataSeq CfgSmgrPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgSmgrPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgSmgrPoll::Ptr CfgSmgrPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgSmgrPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgSmgrPoll(std::move(impl)));
}

void CfgSmgrPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgSmgrPoll::DataSeq CfgSmgrPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgSmgrPoll::FieldsList CfgSmgrPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgSmgrPoll::FieldsList CfgSmgrPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgSmgrPoll::CfgSmgrPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
