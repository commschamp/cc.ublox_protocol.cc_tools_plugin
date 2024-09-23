// Generated by commsdsl2tools_qt v6.3.4

#include "SecSign.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MsgId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/SecSign.h"

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
    using Field = ::cc_ublox::message::SecSignFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecSignFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecSignFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_msgId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_checksum(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecSignFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Checksum;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_hash(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::SecSignFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Hash;
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
    props.append(createProps_msgId(false));
    props.append(createProps_checksum(false));
    props.append(createProps_hash(false));
    return props;
}

} // namespace

class SecSignImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::SecSign<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        SecSignImpl
    >
{
public:
    SecSignImpl() = default;
    SecSignImpl(const SecSignImpl&) = delete;
    SecSignImpl(SecSignImpl&&) = delete;
    virtual ~SecSignImpl() = default;
    SecSignImpl& operator=(const SecSignImpl&) = default;
    SecSignImpl& operator=(SecSignImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

SecSign::SecSign() : m_pImpl(new SecSignImpl) {}
SecSign::~SecSign() = default;

SecSign& SecSign::operator=(const SecSign& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecSign& SecSign::operator=(SecSign&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

SecSign::MsgIdParamType SecSign::doGetId()
{
    return ::cc_ublox::message::SecSign<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* SecSign::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& SecSign::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SecSign::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void SecSign::resetImpl()
{
    m_pImpl->reset();
}

bool SecSign::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const SecSign*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SecSign::MsgIdParamType SecSign::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SecSign::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SecSign::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SecSign::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SecSign::lengthImpl() const
{
    return m_pImpl->length();
}

bool SecSign::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
