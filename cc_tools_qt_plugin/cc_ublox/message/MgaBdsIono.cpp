// Generated by commsdsl2tools_qt v6.3.4

#include "MgaBdsIono.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaBdsIono.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_alpha0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Alpha0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_alpha1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Alpha1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_alpha2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Alpha2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_alpha3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Alpha3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_beta0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beta0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_beta1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beta1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_beta2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beta2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_beta3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beta3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_alpha0(false));
    props.append(createProps_alpha1(false));
    props.append(createProps_alpha2(false));
    props.append(createProps_alpha3(false));
    props.append(createProps_beta0(false));
    props.append(createProps_beta1(false));
    props.append(createProps_beta2(false));
    props.append(createProps_beta3(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaBdsIonoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaBdsIono<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaBdsIonoImpl
    >
{
public:
    MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl(const MgaBdsIonoImpl&) = delete;
    MgaBdsIonoImpl(MgaBdsIonoImpl&&) = delete;
    virtual ~MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl& operator=(const MgaBdsIonoImpl&) = default;
    MgaBdsIonoImpl& operator=(MgaBdsIonoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaBdsIono::MgaBdsIono() : m_pImpl(new MgaBdsIonoImpl) {}
MgaBdsIono::~MgaBdsIono() = default;

MgaBdsIono& MgaBdsIono::operator=(const MgaBdsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsIono& MgaBdsIono::operator=(MgaBdsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaBdsIono::MsgIdParamType MgaBdsIono::doGetId()
{
    return ::cc_ublox::message::MgaBdsIono<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaBdsIono::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaBdsIono::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaBdsIono::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaBdsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsIono::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaBdsIono::MsgIdParamType MgaBdsIono::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaBdsIono::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaBdsIono::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaBdsIono::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaBdsIono::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaBdsIono::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
