// Generated by commsdsl2tools_qt v6.3.3

#include "EsfStatus.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res7.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/EsfStatus.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res7(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_fusionMode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FusionMode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Initialization", 0)
            .add("Fusion", 1)
            .add("Suspended", 2)
            .add("Disabled", 3)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numSens(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSens;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

struct ListMembers
{
    struct ElementMembers
    {
        struct SensStatus1Members
        {
            static QVariantMap createProps_type(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus1Members::Type;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus1Members::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "used")
                        .add(1U, "ready")
                        .asMap();
            }
        }; // struct SensStatus1Members

        static QVariantMap createProps_sensStatus1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus1;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(SensStatus1Members::createProps_type(true))
                    .add(SensStatus1Members::createProps_bits(true))
                    .asMap();
        }

        struct SensStatus2Members
        {
            static QVariantMap createProps_calibStatus(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus2Members::CalibStatus;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add("NotCalibrated", 0)
                        .add("Calibrating", 1)
                        .add("Calibrated", 2)
                        .add("Calibrated2", 3)
                        .asMap();
            }

            static QVariantMap createProps_timeStatus(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus2Members::TimeStatus;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add("NoData", 0)
                        .add("FirstByte", 1)
                        .add("EventInput", 2)
                        .add("TimeTag", 3)
                        .asMap();
            }

            static QVariantMap createProps_reserved(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus2Members::Reserved;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .hidden()
                        .asMap();
            }
        }; // struct SensStatus2Members

        static QVariantMap createProps_sensStatus2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SensStatus2;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(SensStatus2Members::createProps_calibStatus(true))
                    .add(SensStatus2Members::createProps_timeStatus(true))
                    .add(SensStatus2Members::createProps_reserved(true))
                    .asMap();
        }

        static QVariantMap createProps_freq(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Freq;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_faults(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Faults;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(0U, "badMeas")
                    .add(1U, "badTTag")
                    .add(2U, "missingMeas")
                    .add(3U, "noisyMeas")
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_sensStatus1(serHidden))
                .add(ElementMembers::createProps_sensStatus2(serHidden))
                .add(ElementMembers::createProps_freq(serHidden))
                .add(ElementMembers::createProps_faults(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::EsfStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_fusionMode(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_numSens(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class EsfStatusImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::EsfStatus<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        EsfStatusImpl
    >
{
public:
    EsfStatusImpl() = default;
    EsfStatusImpl(const EsfStatusImpl&) = delete;
    EsfStatusImpl(EsfStatusImpl&&) = delete;
    virtual ~EsfStatusImpl() = default;
    EsfStatusImpl& operator=(const EsfStatusImpl&) = default;
    EsfStatusImpl& operator=(EsfStatusImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfStatus::EsfStatus() : m_pImpl(new EsfStatusImpl) {}
EsfStatus::~EsfStatus() = default;

EsfStatus& EsfStatus::operator=(const EsfStatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfStatus& EsfStatus::operator=(EsfStatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

EsfStatus::MsgIdParamType EsfStatus::doGetId()
{
    return ::cc_ublox::message::EsfStatus<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* EsfStatus::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfStatus::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfStatus::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfStatus::resetImpl()
{
    m_pImpl->reset();
}

bool EsfStatus::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfStatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfStatus::MsgIdParamType EsfStatus::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfStatus::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfStatus::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfStatus::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfStatus::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfStatus::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
