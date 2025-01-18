// Generated by commsdsl2tools_qt v7.0.2

#include "CfgTp5PollSelect.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/CfgTp5PollSelect.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class CfgTp5PollSelectImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::CfgTp5PollSelect,
        CfgTp5PollSelectImpl
    >
{
public:
    CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl(const CfgTp5PollSelectImpl&) = default;
    CfgTp5PollSelectImpl(CfgTp5PollSelectImpl&&) = default;
    virtual ~CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl& operator=(const CfgTp5PollSelectImpl&) = default;
    CfgTp5PollSelectImpl& operator=(CfgTp5PollSelectImpl&&) = default;
};

CfgTp5PollSelect::CfgTp5PollSelect() : m_pImpl(new CfgTp5PollSelectImpl) {}
CfgTp5PollSelect::~CfgTp5PollSelect() = default;

CfgTp5PollSelect& CfgTp5PollSelect::operator=(const CfgTp5PollSelect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5PollSelect& CfgTp5PollSelect::operator=(CfgTp5PollSelect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTp5PollSelect::nameImpl() const
{
    return m_pImpl->name();
}

bool CfgTp5PollSelect::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong CfgTp5PollSelect::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString CfgTp5PollSelect::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void CfgTp5PollSelect::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5PollSelect::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5PollSelect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool CfgTp5PollSelect::isValidImpl() const
{
    return m_pImpl->isValid();
}

CfgTp5PollSelect::DataSeq CfgTp5PollSelect::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool CfgTp5PollSelect::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

CfgTp5PollSelect::Ptr CfgTp5PollSelect::cloneImpl() const
{
    ImplPtr impl(static_cast<CfgTp5PollSelectImpl*>(m_pImpl->clone().release()));
    return Ptr(new CfgTp5PollSelect(std::move(impl)));
}

void CfgTp5PollSelect::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

CfgTp5PollSelect::DataSeq CfgTp5PollSelect::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

CfgTp5PollSelect::FieldsList CfgTp5PollSelect::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

CfgTp5PollSelect::FieldsList CfgTp5PollSelect::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

CfgTp5PollSelect::CfgTp5PollSelect(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
