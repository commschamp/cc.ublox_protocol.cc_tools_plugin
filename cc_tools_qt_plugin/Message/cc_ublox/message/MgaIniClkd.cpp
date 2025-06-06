// Generated by commsdsl2tools_qt v7.1.0

#include "MgaIniClkd.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaIniClkd.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaIniClkdImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaIniClkd,
        MgaIniClkdImpl
    >
{
public:
    MgaIniClkdImpl() = default;
    MgaIniClkdImpl(const MgaIniClkdImpl&) = default;
    MgaIniClkdImpl(MgaIniClkdImpl&&) = default;
    virtual ~MgaIniClkdImpl() = default;
    MgaIniClkdImpl& operator=(const MgaIniClkdImpl&) = default;
    MgaIniClkdImpl& operator=(MgaIniClkdImpl&&) = default;
};

MgaIniClkd::MgaIniClkd() : m_pImpl(new MgaIniClkdImpl) {}
MgaIniClkd::~MgaIniClkd() = default;

MgaIniClkd& MgaIniClkd::operator=(const MgaIniClkd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniClkd& MgaIniClkd::operator=(MgaIniClkd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniClkd::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaIniClkd::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaIniClkd::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaIniClkd::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaIniClkd::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniClkd::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaIniClkd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaIniClkd::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaIniClkd::DataSeq MgaIniClkd::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaIniClkd::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaIniClkd::Ptr MgaIniClkd::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaIniClkdImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaIniClkd(std::move(impl)));
}

void MgaIniClkd::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaIniClkd::DataSeq MgaIniClkd::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaIniClkd::FieldsList MgaIniClkd::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaIniClkd::FieldsList MgaIniClkd::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaIniClkd::MgaIniClkd(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
