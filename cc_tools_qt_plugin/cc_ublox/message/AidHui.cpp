// Generated by commsdsl2tools_qt v6.3.0

#include "AidHui.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidHui.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_health(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Health;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcA0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcA0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcA1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcA1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcTOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcTOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcWNT(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcWNT;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcLS(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcLS;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcWNF(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcWNF;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcDN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcDN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcLSF(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcLSF;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcSpare(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcSpare;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobA0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobA0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobA1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobA1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobA2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobA2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobA3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobA3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobB0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobB0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobB1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobB1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobB2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobB2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_klobB3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KlobB3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidHuiFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "healthValid")
            .add(1U, "utcValid")
            .add(2U, "klobValid")
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_health(false));
    props.append(createProps_utcA0(false));
    props.append(createProps_utcA1(false));
    props.append(createProps_utcTOW(false));
    props.append(createProps_utcWNT(false));
    props.append(createProps_utcLS(false));
    props.append(createProps_utcWNF(false));
    props.append(createProps_utcDN(false));
    props.append(createProps_utcLSF(false));
    props.append(createProps_utcSpare(false));
    props.append(createProps_klobA0(false));
    props.append(createProps_klobA1(false));
    props.append(createProps_klobA2(false));
    props.append(createProps_klobA3(false));
    props.append(createProps_klobB0(false));
    props.append(createProps_klobB1(false));
    props.append(createProps_klobB2(false));
    props.append(createProps_klobB3(false));
    props.append(createProps_flags(false));
    return props;
}

} // namespace

class AidHuiImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidHui<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidHuiImpl
    >
{
public:
    AidHuiImpl() = default;
    AidHuiImpl(const AidHuiImpl&) = delete;
    AidHuiImpl(AidHuiImpl&&) = delete;
    virtual ~AidHuiImpl() = default;
    AidHuiImpl& operator=(const AidHuiImpl&) = default;
    AidHuiImpl& operator=(AidHuiImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidHui::AidHui() : m_pImpl(new AidHuiImpl) {}
AidHui::~AidHui() = default;

AidHui& AidHui::operator=(const AidHui& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidHui& AidHui::operator=(AidHui&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidHui::MsgIdParamType AidHui::doGetId()
{
    return ::cc_ublox::message::AidHui<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidHui::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidHui::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidHui::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidHui::resetImpl()
{
    m_pImpl->reset();
}

bool AidHui::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidHui*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidHui::MsgIdParamType AidHui::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidHui::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidHui::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidHui::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidHui::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidHui::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
