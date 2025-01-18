// Generated by commsdsl2tools_qt v7.0.2

#include "MgaGalTimeoffset.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaGalTimeoffset.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaGalTimeoffsetImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaGalTimeoffset,
        MgaGalTimeoffsetImpl
    >
{
public:
    MgaGalTimeoffsetImpl() = default;
    MgaGalTimeoffsetImpl(const MgaGalTimeoffsetImpl&) = default;
    MgaGalTimeoffsetImpl(MgaGalTimeoffsetImpl&&) = default;
    virtual ~MgaGalTimeoffsetImpl() = default;
    MgaGalTimeoffsetImpl& operator=(const MgaGalTimeoffsetImpl&) = default;
    MgaGalTimeoffsetImpl& operator=(MgaGalTimeoffsetImpl&&) = default;
};

MgaGalTimeoffset::MgaGalTimeoffset() : m_pImpl(new MgaGalTimeoffsetImpl) {}
MgaGalTimeoffset::~MgaGalTimeoffset() = default;

MgaGalTimeoffset& MgaGalTimeoffset::operator=(const MgaGalTimeoffset& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGalTimeoffset& MgaGalTimeoffset::operator=(MgaGalTimeoffset&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGalTimeoffset::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaGalTimeoffset::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaGalTimeoffset::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaGalTimeoffset::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaGalTimeoffset::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGalTimeoffset::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaGalTimeoffset*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaGalTimeoffset::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaGalTimeoffset::DataSeq MgaGalTimeoffset::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaGalTimeoffset::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaGalTimeoffset::Ptr MgaGalTimeoffset::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaGalTimeoffsetImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaGalTimeoffset(std::move(impl)));
}

void MgaGalTimeoffset::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaGalTimeoffset::DataSeq MgaGalTimeoffset::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaGalTimeoffset::FieldsList MgaGalTimeoffset::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaGalTimeoffset::FieldsList MgaGalTimeoffset::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaGalTimeoffset::MgaGalTimeoffset(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
