// Generated by commsdsl2tools_qt v6.3.4

#include "AidAlp.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlp.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_predTow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PredTow;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_predDur(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PredDur;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_age(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Age;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_predWno(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PredWno;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_almWno(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AlmWno;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_predTow(false));
    props.append(createProps_predDur(false));
    props.append(createProps_age(false));
    props.append(createProps_predWno(false));
    props.append(createProps_almWno(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_svs(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class AidAlpImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlp<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlpImpl
    >
{
public:
    AidAlpImpl() = default;
    AidAlpImpl(const AidAlpImpl&) = delete;
    AidAlpImpl(AidAlpImpl&&) = delete;
    virtual ~AidAlpImpl() = default;
    AidAlpImpl& operator=(const AidAlpImpl&) = default;
    AidAlpImpl& operator=(AidAlpImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlp::AidAlp() : m_pImpl(new AidAlpImpl) {}
AidAlp::~AidAlp() = default;

AidAlp& AidAlp::operator=(const AidAlp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlp& AidAlp::operator=(AidAlp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlp::MsgIdParamType AidAlp::doGetId()
{
    return ::cc_ublox::message::AidAlp<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlp::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlp::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlp::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlp::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlp::MsgIdParamType AidAlp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlp::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
