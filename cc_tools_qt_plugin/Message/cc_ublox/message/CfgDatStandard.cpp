// Generated by commsdsl2tools_qt v7.1.0

#include "CfgDatStandard.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgDatStandard.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgDatStandardImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgDatStandard,
        CfgDatStandardImpl
    >
{
public:
    CfgDatStandardImpl() = default;
    CfgDatStandardImpl(const CfgDatStandardImpl&) = default;
    CfgDatStandardImpl(CfgDatStandardImpl&&) = default;
    virtual ~CfgDatStandardImpl() = default;
    CfgDatStandardImpl& operator=(const CfgDatStandardImpl&) = default;
    CfgDatStandardImpl& operator=(CfgDatStandardImpl&&) = default;
};

CfgDatStandard::CfgDatStandard() : m_pImpl(new CfgDatStandardImpl) {}
CfgDatStandard::~CfgDatStandard() = default;

CfgDatStandard& CfgDatStandard::operator=(const CfgDatStandard& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatStandard& CfgDatStandard::operator=(CfgDatStandard&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDatStandard::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgDatStandard::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgDatStandard::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgDatStandard::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgDatStandard::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatStandard::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgDatStandard*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgDatStandard::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgDatStandard::DataSeq CfgDatStandard::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgDatStandard::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgDatStandard::Ptr CfgDatStandard::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgDatStandardImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgDatStandard(std::move(impl)));
}

void CfgDatStandard::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgDatStandard::DataSeq CfgDatStandard::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgDatStandard::FieldsList CfgDatStandard::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgDatStandard::FieldsList CfgDatStandard::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgDatStandard::CfgDatStandard(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
