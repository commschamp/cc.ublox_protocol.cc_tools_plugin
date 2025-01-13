// Generated by commsdsl2tools_qt v7.0.0

#include "CfgPrtUart.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPrtUart.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPrtUartImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPrtUart,
        CfgPrtUartImpl
    >
{
public:
    CfgPrtUartImpl() = default;
    CfgPrtUartImpl(const CfgPrtUartImpl&) = default;
    CfgPrtUartImpl(CfgPrtUartImpl&&) = default;
    virtual ~CfgPrtUartImpl() = default;
    CfgPrtUartImpl& operator=(const CfgPrtUartImpl&) = default;
    CfgPrtUartImpl& operator=(CfgPrtUartImpl&&) = default;
};

CfgPrtUart::CfgPrtUart() : m_pImpl(new CfgPrtUartImpl) {}
CfgPrtUart::~CfgPrtUart() = default;

CfgPrtUart& CfgPrtUart::operator=(const CfgPrtUart& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtUart& CfgPrtUart::operator=(CfgPrtUart&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtUart::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPrtUart::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPrtUart::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPrtUart::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPrtUart::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtUart::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtUart*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPrtUart::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPrtUart::DataSeq CfgPrtUart::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPrtUart::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPrtUart::Ptr CfgPrtUart::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPrtUartImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPrtUart(std::move(impl)));
}

void CfgPrtUart::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPrtUart::DataSeq CfgPrtUart::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPrtUart::FieldsList CfgPrtUart::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPrtUart::FieldsList CfgPrtUart::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPrtUart::CfgPrtUart(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
