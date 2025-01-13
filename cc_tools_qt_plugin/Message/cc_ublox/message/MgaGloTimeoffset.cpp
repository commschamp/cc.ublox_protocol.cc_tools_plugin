// Generated by commsdsl2tools_qt v7.0.0

#include "MgaGloTimeoffset.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaGloTimeoffset.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaGloTimeoffsetImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaGloTimeoffset,
        MgaGloTimeoffsetImpl
    >
{
public:
    MgaGloTimeoffsetImpl() = default;
    MgaGloTimeoffsetImpl(const MgaGloTimeoffsetImpl&) = default;
    MgaGloTimeoffsetImpl(MgaGloTimeoffsetImpl&&) = default;
    virtual ~MgaGloTimeoffsetImpl() = default;
    MgaGloTimeoffsetImpl& operator=(const MgaGloTimeoffsetImpl&) = default;
    MgaGloTimeoffsetImpl& operator=(MgaGloTimeoffsetImpl&&) = default;
};

MgaGloTimeoffset::MgaGloTimeoffset() : m_pImpl(new MgaGloTimeoffsetImpl) {}
MgaGloTimeoffset::~MgaGloTimeoffset() = default;

MgaGloTimeoffset& MgaGloTimeoffset::operator=(const MgaGloTimeoffset& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGloTimeoffset& MgaGloTimeoffset::operator=(MgaGloTimeoffset&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGloTimeoffset::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaGloTimeoffset::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaGloTimeoffset::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaGloTimeoffset::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaGloTimeoffset::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGloTimeoffset::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaGloTimeoffset*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaGloTimeoffset::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaGloTimeoffset::DataSeq MgaGloTimeoffset::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaGloTimeoffset::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaGloTimeoffset::Ptr MgaGloTimeoffset::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaGloTimeoffsetImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaGloTimeoffset(std::move(impl)));
}

void MgaGloTimeoffset::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaGloTimeoffset::DataSeq MgaGloTimeoffset::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaGloTimeoffset::FieldsList MgaGloTimeoffset::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaGloTimeoffset::FieldsList MgaGloTimeoffset::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaGloTimeoffset::MgaGloTimeoffset(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
