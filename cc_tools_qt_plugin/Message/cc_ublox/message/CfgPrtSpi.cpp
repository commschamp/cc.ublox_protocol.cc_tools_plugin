// Generated by commsdsl2tools_qt v7.0.2

#include "CfgPrtSpi.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgPrtSpi.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgPrtSpiImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgPrtSpi,
        CfgPrtSpiImpl
    >
{
public:
    CfgPrtSpiImpl() = default;
    CfgPrtSpiImpl(const CfgPrtSpiImpl&) = default;
    CfgPrtSpiImpl(CfgPrtSpiImpl&&) = default;
    virtual ~CfgPrtSpiImpl() = default;
    CfgPrtSpiImpl& operator=(const CfgPrtSpiImpl&) = default;
    CfgPrtSpiImpl& operator=(CfgPrtSpiImpl&&) = default;
};

CfgPrtSpi::CfgPrtSpi() : m_pImpl(new CfgPrtSpiImpl) {}
CfgPrtSpi::~CfgPrtSpi() = default;

CfgPrtSpi& CfgPrtSpi::operator=(const CfgPrtSpi& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtSpi& CfgPrtSpi::operator=(CfgPrtSpi&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtSpi::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgPrtSpi::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgPrtSpi::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgPrtSpi::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgPrtSpi::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtSpi::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtSpi*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgPrtSpi::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgPrtSpi::DataSeq CfgPrtSpi::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgPrtSpi::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgPrtSpi::Ptr CfgPrtSpi::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgPrtSpiImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgPrtSpi(std::move(impl)));
}

void CfgPrtSpi::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgPrtSpi::DataSeq CfgPrtSpi::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgPrtSpi::FieldsList CfgPrtSpi::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgPrtSpi::FieldsList CfgPrtSpi::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgPrtSpi::CfgPrtSpi(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
