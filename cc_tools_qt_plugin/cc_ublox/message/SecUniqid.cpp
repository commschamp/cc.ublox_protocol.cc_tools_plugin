// Generated by commsdsl2tools_qt v6.3.4

#include "SecUniqid.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/SecUniqid.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecUniqidFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecUniqidFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_uniqueId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecUniqidFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UniqueId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_uniqueId(false));
    return props;
}

} // namespace

class SecUniqidImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::SecUniqid<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        SecUniqidImpl
    >
{
public:
    SecUniqidImpl() = default;
    SecUniqidImpl(const SecUniqidImpl&) = delete;
    SecUniqidImpl(SecUniqidImpl&&) = delete;
    virtual ~SecUniqidImpl() = default;
    SecUniqidImpl& operator=(const SecUniqidImpl&) = default;
    SecUniqidImpl& operator=(SecUniqidImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

SecUniqid::SecUniqid() : m_pImpl(new SecUniqidImpl) {}
SecUniqid::~SecUniqid() = default;

SecUniqid& SecUniqid::operator=(const SecUniqid& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecUniqid& SecUniqid::operator=(SecUniqid&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

SecUniqid::MsgIdParamType SecUniqid::doGetId()
{
    return ::cc_ublox::message::SecUniqid<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* SecUniqid::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& SecUniqid::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SecUniqid::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void SecUniqid::resetImpl()
{
    m_pImpl->reset();
}

bool SecUniqid::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const SecUniqid*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SecUniqid::MsgIdParamType SecUniqid::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SecUniqid::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SecUniqid::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SecUniqid::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SecUniqid::lengthImpl() const
{
    return m_pImpl->length();
}

bool SecUniqid::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
