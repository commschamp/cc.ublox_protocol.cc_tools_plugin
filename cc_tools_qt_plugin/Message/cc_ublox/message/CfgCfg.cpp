// Generated by commsdsl2tools_qt v7.1.0

#include "CfgCfg.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgCfg.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgCfgImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgCfg,
        CfgCfgImpl
    >
{
public:
    CfgCfgImpl() = default;
    CfgCfgImpl(const CfgCfgImpl&) = default;
    CfgCfgImpl(CfgCfgImpl&&) = default;
    virtual ~CfgCfgImpl() = default;
    CfgCfgImpl& operator=(const CfgCfgImpl&) = default;
    CfgCfgImpl& operator=(CfgCfgImpl&&) = default;
};

CfgCfg::CfgCfg() : m_pImpl(new CfgCfgImpl) {}
CfgCfg::~CfgCfg() = default;

CfgCfg& CfgCfg::operator=(const CfgCfg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgCfg& CfgCfg::operator=(CfgCfg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgCfg::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgCfg::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgCfg::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgCfg::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgCfg::resetImpl()
{
    m_pImpl->reset();
}

bool CfgCfg::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgCfg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgCfg::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgCfg::DataSeq CfgCfg::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgCfg::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgCfg::Ptr CfgCfg::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgCfgImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgCfg(std::move(impl)));
}

void CfgCfg::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgCfg::DataSeq CfgCfg::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgCfg::FieldsList CfgCfg::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgCfg::FieldsList CfgCfg::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgCfg::CfgCfg(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
