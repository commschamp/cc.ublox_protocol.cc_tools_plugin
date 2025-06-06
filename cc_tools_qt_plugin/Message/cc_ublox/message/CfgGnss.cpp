// Generated by commsdsl2tools_qt v7.1.0

#include "CfgGnss.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgGnss.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgGnssImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgGnss,
        CfgGnssImpl
    >
{
public:
    CfgGnssImpl() = default;
    CfgGnssImpl(const CfgGnssImpl&) = default;
    CfgGnssImpl(CfgGnssImpl&&) = default;
    virtual ~CfgGnssImpl() = default;
    CfgGnssImpl& operator=(const CfgGnssImpl&) = default;
    CfgGnssImpl& operator=(CfgGnssImpl&&) = default;
};

CfgGnss::CfgGnss() : m_pImpl(new CfgGnssImpl) {}
CfgGnss::~CfgGnss() = default;

CfgGnss& CfgGnss::operator=(const CfgGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGnss& CfgGnss::operator=(CfgGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgGnss::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgGnss::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgGnss::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgGnss::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgGnss::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGnss::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgGnss::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgGnss::DataSeq CfgGnss::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgGnss::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgGnss::Ptr CfgGnss::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgGnssImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgGnss(std::move(impl)));
}

void CfgGnss::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgGnss::DataSeq CfgGnss::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgGnss::FieldsList CfgGnss::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgGnss::FieldsList CfgGnss::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgGnss::CfgGnss(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
