// Generated by commsdsl2tools_qt v7.0.0

#include "CfgNvs.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgNvs.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgNvsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgNvs,
        CfgNvsImpl
    >
{
public:
    CfgNvsImpl() = default;
    CfgNvsImpl(const CfgNvsImpl&) = default;
    CfgNvsImpl(CfgNvsImpl&&) = default;
    virtual ~CfgNvsImpl() = default;
    CfgNvsImpl& operator=(const CfgNvsImpl&) = default;
    CfgNvsImpl& operator=(CfgNvsImpl&&) = default;
};

CfgNvs::CfgNvs() : m_pImpl(new CfgNvsImpl) {}
CfgNvs::~CfgNvs() = default;

CfgNvs& CfgNvs::operator=(const CfgNvs& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNvs& CfgNvs::operator=(CfgNvs&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNvs::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgNvs::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgNvs::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgNvs::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgNvs::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNvs::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgNvs*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgNvs::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgNvs::DataSeq CfgNvs::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgNvs::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgNvs::Ptr CfgNvs::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgNvsImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgNvs(std::move(impl)));
}

void CfgNvs::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgNvs::DataSeq CfgNvs::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgNvs::FieldsList CfgNvs::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgNvs::FieldsList CfgNvs::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgNvs::CfgNvs(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
