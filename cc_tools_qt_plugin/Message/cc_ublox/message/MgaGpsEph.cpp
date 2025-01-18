// Generated by commsdsl2tools_qt v7.0.2

#include "MgaGpsEph.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaGpsEph.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaGpsEphImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaGpsEph,
        MgaGpsEphImpl
    >
{
public:
    MgaGpsEphImpl() = default;
    MgaGpsEphImpl(const MgaGpsEphImpl&) = default;
    MgaGpsEphImpl(MgaGpsEphImpl&&) = default;
    virtual ~MgaGpsEphImpl() = default;
    MgaGpsEphImpl& operator=(const MgaGpsEphImpl&) = default;
    MgaGpsEphImpl& operator=(MgaGpsEphImpl&&) = default;
};

MgaGpsEph::MgaGpsEph() : m_pImpl(new MgaGpsEphImpl) {}
MgaGpsEph::~MgaGpsEph() = default;

MgaGpsEph& MgaGpsEph::operator=(const MgaGpsEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsEph& MgaGpsEph::operator=(MgaGpsEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsEph::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaGpsEph::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaGpsEph::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaGpsEph::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaGpsEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsEph::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaGpsEph::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaGpsEph::DataSeq MgaGpsEph::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaGpsEph::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaGpsEph::Ptr MgaGpsEph::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaGpsEphImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaGpsEph(std::move(impl)));
}

void MgaGpsEph::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaGpsEph::DataSeq MgaGpsEph::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaGpsEph::FieldsList MgaGpsEph::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaGpsEph::FieldsList MgaGpsEph::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaGpsEph::MgaGpsEph(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
