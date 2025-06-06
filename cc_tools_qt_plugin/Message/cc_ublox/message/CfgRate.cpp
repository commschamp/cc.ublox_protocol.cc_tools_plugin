// Generated by commsdsl2tools_qt v7.1.0

#include "CfgRate.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgRate.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgRateImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgRate,
        CfgRateImpl
    >
{
public:
    CfgRateImpl() = default;
    CfgRateImpl(const CfgRateImpl&) = default;
    CfgRateImpl(CfgRateImpl&&) = default;
    virtual ~CfgRateImpl() = default;
    CfgRateImpl& operator=(const CfgRateImpl&) = default;
    CfgRateImpl& operator=(CfgRateImpl&&) = default;
};

CfgRate::CfgRate() : m_pImpl(new CfgRateImpl) {}
CfgRate::~CfgRate() = default;

CfgRate& CfgRate::operator=(const CfgRate& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRate& CfgRate::operator=(CfgRate&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRate::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgRate::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgRate::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgRate::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgRate::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRate::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgRate*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgRate::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgRate::DataSeq CfgRate::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgRate::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgRate::Ptr CfgRate::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgRateImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgRate(std::move(impl)));
}

void CfgRate::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgRate::DataSeq CfgRate::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgRate::FieldsList CfgRate::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgRate::FieldsList CfgRate::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgRate::CfgRate(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
