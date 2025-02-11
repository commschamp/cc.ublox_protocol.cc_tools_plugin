// Generated by commsdsl2tools_qt v7.0.3

#include "MgaQzssEph.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaQzssEph.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaQzssEphImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaQzssEph,
        MgaQzssEphImpl
    >
{
public:
    MgaQzssEphImpl() = default;
    MgaQzssEphImpl(const MgaQzssEphImpl&) = default;
    MgaQzssEphImpl(MgaQzssEphImpl&&) = default;
    virtual ~MgaQzssEphImpl() = default;
    MgaQzssEphImpl& operator=(const MgaQzssEphImpl&) = default;
    MgaQzssEphImpl& operator=(MgaQzssEphImpl&&) = default;
};

MgaQzssEph::MgaQzssEph() : m_pImpl(new MgaQzssEphImpl) {}
MgaQzssEph::~MgaQzssEph() = default;

MgaQzssEph& MgaQzssEph::operator=(const MgaQzssEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaQzssEph& MgaQzssEph::operator=(MgaQzssEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaQzssEph::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaQzssEph::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaQzssEph::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaQzssEph::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaQzssEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaQzssEph::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaQzssEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaQzssEph::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaQzssEph::DataSeq MgaQzssEph::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaQzssEph::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaQzssEph::Ptr MgaQzssEph::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaQzssEphImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaQzssEph(std::move(impl)));
}

void MgaQzssEph::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaQzssEph::DataSeq MgaQzssEph::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaQzssEph::FieldsList MgaQzssEph::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaQzssEph::FieldsList MgaQzssEph::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaQzssEph::MgaQzssEph(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
