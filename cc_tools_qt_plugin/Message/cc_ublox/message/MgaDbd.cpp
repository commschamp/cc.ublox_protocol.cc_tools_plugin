// Generated by commsdsl2tools_qt v7.1.0

#include "MgaDbd.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaDbd.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaDbdImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaDbd,
        MgaDbdImpl
    >
{
public:
    MgaDbdImpl() = default;
    MgaDbdImpl(const MgaDbdImpl&) = default;
    MgaDbdImpl(MgaDbdImpl&&) = default;
    virtual ~MgaDbdImpl() = default;
    MgaDbdImpl& operator=(const MgaDbdImpl&) = default;
    MgaDbdImpl& operator=(MgaDbdImpl&&) = default;
};

MgaDbd::MgaDbd() : m_pImpl(new MgaDbdImpl) {}
MgaDbd::~MgaDbd() = default;

MgaDbd& MgaDbd::operator=(const MgaDbd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaDbd& MgaDbd::operator=(MgaDbd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaDbd::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaDbd::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaDbd::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaDbd::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaDbd::resetImpl()
{
    m_pImpl->reset();
}

bool MgaDbd::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaDbd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaDbd::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaDbd::DataSeq MgaDbd::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaDbd::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaDbd::Ptr MgaDbd::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaDbdImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaDbd(std::move(impl)));
}

void MgaDbd::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaDbd::DataSeq MgaDbd::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaDbd::FieldsList MgaDbd::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaDbd::FieldsList MgaDbd::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaDbd::MgaDbd(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
