// Generated by commsdsl2tools_qt v7.1.0

#include "CfgTp5.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgTp5.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgTp5Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgTp5,
        CfgTp5Impl
    >
{
public:
    CfgTp5Impl() = default;
    CfgTp5Impl(const CfgTp5Impl&) = default;
    CfgTp5Impl(CfgTp5Impl&&) = default;
    virtual ~CfgTp5Impl() = default;
    CfgTp5Impl& operator=(const CfgTp5Impl&) = default;
    CfgTp5Impl& operator=(CfgTp5Impl&&) = default;
};

CfgTp5::CfgTp5() : m_pImpl(new CfgTp5Impl) {}
CfgTp5::~CfgTp5() = default;

CfgTp5& CfgTp5::operator=(const CfgTp5& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5& CfgTp5::operator=(CfgTp5&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTp5::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgTp5::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgTp5::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgTp5::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgTp5::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgTp5::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgTp5::DataSeq CfgTp5::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgTp5::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgTp5::Ptr CfgTp5::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgTp5Impl*>(m_pImpl->clone().release()));
    return Ptr(new CfgTp5(std::move(impl)));
}

void CfgTp5::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgTp5::DataSeq CfgTp5::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgTp5::FieldsList CfgTp5::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgTp5::FieldsList CfgTp5::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgTp5::CfgTp5(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
