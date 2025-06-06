// Generated by commsdsl2tools_qt v7.1.0

#include "MgaQzssAlm.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaQzssAlm.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaQzssAlmImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaQzssAlm,
        MgaQzssAlmImpl
    >
{
public:
    MgaQzssAlmImpl() = default;
    MgaQzssAlmImpl(const MgaQzssAlmImpl&) = default;
    MgaQzssAlmImpl(MgaQzssAlmImpl&&) = default;
    virtual ~MgaQzssAlmImpl() = default;
    MgaQzssAlmImpl& operator=(const MgaQzssAlmImpl&) = default;
    MgaQzssAlmImpl& operator=(MgaQzssAlmImpl&&) = default;
};

MgaQzssAlm::MgaQzssAlm() : m_pImpl(new MgaQzssAlmImpl) {}
MgaQzssAlm::~MgaQzssAlm() = default;

MgaQzssAlm& MgaQzssAlm::operator=(const MgaQzssAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaQzssAlm& MgaQzssAlm::operator=(MgaQzssAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaQzssAlm::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaQzssAlm::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaQzssAlm::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaQzssAlm::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaQzssAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaQzssAlm::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaQzssAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaQzssAlm::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaQzssAlm::DataSeq MgaQzssAlm::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaQzssAlm::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaQzssAlm::Ptr MgaQzssAlm::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaQzssAlmImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaQzssAlm(std::move(impl)));
}

void MgaQzssAlm::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaQzssAlm::DataSeq MgaQzssAlm::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaQzssAlm::FieldsList MgaQzssAlm::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaQzssAlm::FieldsList MgaQzssAlm::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaQzssAlm::MgaQzssAlm(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
