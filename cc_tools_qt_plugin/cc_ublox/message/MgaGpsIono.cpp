// Generated by commsdsl2tools_qt v6.3.3

#include "MgaGpsIono.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGpsIono.h"

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
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ionoAlpha0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoAlpha0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoAlpha1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoAlpha1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoAlpha2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoAlpha2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoAlpha3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoAlpha3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoBeta0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoBeta0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoBeta1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoBeta1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoBeta2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoBeta2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ionoBeta3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IonoBeta3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsIonoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_ionoAlpha0(false));
    props.append(createProps_ionoAlpha1(false));
    props.append(createProps_ionoAlpha2(false));
    props.append(createProps_ionoAlpha3(false));
    props.append(createProps_ionoBeta0(false));
    props.append(createProps_ionoBeta1(false));
    props.append(createProps_ionoBeta2(false));
    props.append(createProps_ionoBeta3(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaGpsIonoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGpsIono<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGpsIonoImpl
    >
{
public:
    MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl(const MgaGpsIonoImpl&) = delete;
    MgaGpsIonoImpl(MgaGpsIonoImpl&&) = delete;
    virtual ~MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl& operator=(const MgaGpsIonoImpl&) = default;
    MgaGpsIonoImpl& operator=(MgaGpsIonoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsIono::MgaGpsIono() : m_pImpl(new MgaGpsIonoImpl) {}
MgaGpsIono::~MgaGpsIono() = default;

MgaGpsIono& MgaGpsIono::operator=(const MgaGpsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsIono& MgaGpsIono::operator=(MgaGpsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGpsIono::MsgIdParamType MgaGpsIono::doGetId()
{
    return ::cc_ublox::message::MgaGpsIono<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGpsIono::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsIono::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsIono::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsIono::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsIono::MsgIdParamType MgaGpsIono::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsIono::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsIono::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsIono::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsIono::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsIono::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
