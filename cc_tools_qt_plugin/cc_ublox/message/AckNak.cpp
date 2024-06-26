// Generated by commsdsl2tools_qt v6.3.3

#include "AckNak.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MsgId.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AckNak.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AckNakFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_msgId(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId(false));
    return props;
}

} // namespace

class AckNakImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AckNak<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AckNakImpl
    >
{
public:
    AckNakImpl() = default;
    AckNakImpl(const AckNakImpl&) = delete;
    AckNakImpl(AckNakImpl&&) = delete;
    virtual ~AckNakImpl() = default;
    AckNakImpl& operator=(const AckNakImpl&) = default;
    AckNakImpl& operator=(AckNakImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AckNak::AckNak() : m_pImpl(new AckNakImpl) {}
AckNak::~AckNak() = default;

AckNak& AckNak::operator=(const AckNak& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AckNak& AckNak::operator=(AckNak&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AckNak::MsgIdParamType AckNak::doGetId()
{
    return ::cc_ublox::message::AckNak<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AckNak::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AckNak::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AckNak::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AckNak::resetImpl()
{
    m_pImpl->reset();
}

bool AckNak::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AckNak*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AckNak::MsgIdParamType AckNak::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AckNak::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AckNak::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AckNak::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AckNak::lengthImpl() const
{
    return m_pImpl->length();
}

bool AckNak::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
