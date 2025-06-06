// Generated by commsdsl2tools_qt v7.1.0

#include "MonGnss.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonGnss.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonGnssImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonGnss,
        MonGnssImpl
    >
{
public:
    MonGnssImpl() = default;
    MonGnssImpl(const MonGnssImpl&) = default;
    MonGnssImpl(MonGnssImpl&&) = default;
    virtual ~MonGnssImpl() = default;
    MonGnssImpl& operator=(const MonGnssImpl&) = default;
    MonGnssImpl& operator=(MonGnssImpl&&) = default;
};

MonGnss::MonGnss() : m_pImpl(new MonGnssImpl) {}
MonGnss::~MonGnss() = default;

MonGnss& MonGnss::operator=(const MonGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonGnss& MonGnss::operator=(MonGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonGnss::nameImpl() const
{
    return m_pImpl->name();
}

bool MonGnss::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonGnss::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonGnss::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonGnss::resetImpl()
{
    m_pImpl->reset();
}

bool MonGnss::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonGnss::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonGnss::DataSeq MonGnss::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonGnss::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonGnss::Ptr MonGnss::cloneImpl() const
{
    ImplPtr impl(static_cast<MonGnssImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonGnss(std::move(impl)));
}

void MonGnss::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonGnss::DataSeq MonGnss::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonGnss::FieldsList MonGnss::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonGnss::FieldsList MonGnss::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonGnss::MonGnss(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
